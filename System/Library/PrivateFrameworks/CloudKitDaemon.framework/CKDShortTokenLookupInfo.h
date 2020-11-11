/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShortTokenLookupInfo : NSObject <NSCopying> {

	BOOL _shouldFetchRootRecord;
	BOOL _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenHashData;

}

@property (nonatomic,retain) NSString * routingKey;                           //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                      //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (assign,nonatomic) BOOL forceDSRefetch;                             //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
-(unsigned long long)hash;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
@end
