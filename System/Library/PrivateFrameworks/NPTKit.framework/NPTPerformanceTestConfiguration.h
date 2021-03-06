/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface NPTPerformanceTestConfiguration : NSObject <NSCopying> {

	NSURL* privateDownloadURL;
	NSURL* privateUploadURL;
	NSString* privatePingHost;
	BOOL _useSecureConnection;
	BOOL _collectMetadata;
	BOOL _endWhenStable;
	int _downloadSize;
	int _uploadSize;
	int _pingAddressStyle;
	int _interfaceType;
	unsigned long long _pingCount;
	long long _concurrentStreams;
	NSString* _clientName;
	NSString* _uuid;
	unsigned long long _testDuration;
	NSString* _interfaceName;

}

@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL forceWiFi; 
@property (assign,nonatomic) BOOL useSecureConnection;                     //@synthesize useSecureConnection=_useSecureConnection - In the implementation block
@property (assign,nonatomic) int downloadSize;                             //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) int uploadSize;                               //@synthesize uploadSize=_uploadSize - In the implementation block
@property (assign,nonatomic) unsigned long long pingCount;                 //@synthesize pingCount=_pingCount - In the implementation block
@property (assign,nonatomic) int pingAddressStyle;                         //@synthesize pingAddressStyle=_pingAddressStyle - In the implementation block
@property (assign,nonatomic) BOOL collectMetadata;                         //@synthesize collectMetadata=_collectMetadata - In the implementation block
@property (assign,nonatomic) long long concurrentStreams;                  //@synthesize concurrentStreams=_concurrentStreams - In the implementation block
@property (nonatomic,retain) NSURL * downloadURL; 
@property (nonatomic,retain) NSURL * uploadURL; 
@property (nonatomic,retain) NSString * pingHost; 
@property (assign,nonatomic) int interfaceType;                            //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,retain) NSString * clientName;                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long testDuration;              //@synthesize testDuration=_testDuration - In the implementation block
@property (assign,nonatomic) BOOL endWhenStable;                           //@synthesize endWhenStable=_endWhenStable - In the implementation block
+(id)defaultConfiguration;
+(id)evaluateInterfaceName:(int)arg1 ;
+(id)interfaceServiceName:(int)arg1 ;
+(id)defaultConfigurationWiFi;
+(id)defaultConfigurationWiredEthernet;
+(id)defaultConfigurationCellular;
-(void)setClientName:(NSString *)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(int)interfaceType;
-(void)setUuid:(NSString *)arg1 ;
-(id)init;
-(NSString *)clientName;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSURL *)uploadURL;
-(id)description;
-(NSString *)uuid;
-(void)setDownloadSize:(int)arg1 ;
-(void)setInterfaceType:(int)arg1 ;
-(NSString *)interfaceName;
-(void)setUploadURL:(NSURL *)arg1 ;
-(NSURL *)downloadURL;
-(void)setUploadSize:(int)arg1 ;
-(int)uploadSize;
-(int)downloadSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)testDuration;
-(void)setPingCount:(unsigned long long)arg1 ;
-(unsigned long long)pingCount;
-(void)setConcurrentStreams:(long long)arg1 ;
-(long long)concurrentStreams;
-(BOOL)endWhenStable;
-(NSString *)pingHost;
-(BOOL)collectMetadata;
-(int)pingAddressStyle;
-(void)setUseSecureConnection:(BOOL)arg1 ;
-(void)setPingAddressStyle:(int)arg1 ;
-(void)setCollectMetadata:(BOOL)arg1 ;
-(void)setTestDuration:(unsigned long long)arg1 ;
-(id)cdnUploadURL;
-(BOOL)useSecureConnection;
-(id)cdnDownloadURL;
-(void)setPingHost:(NSString *)arg1 ;
-(BOOL)customURLSet;
-(BOOL)forceWiFi;
-(void)setForceWiFi:(BOOL)arg1 ;
-(void)setEndWhenStable:(BOOL)arg1 ;
@end

