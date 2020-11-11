/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFNetworkProfile, NSArray, NSString;

@interface WFANQPQueryResponse : NSObject {

	WFNetworkProfile* _profile;
	NSArray* _cellNetworkInfo;
	NSArray* _roamingConsortium;
	NSArray* _domains;
	NSString* _ssid;
	NSString* _bssid;
	NSString* _operatorName;
	long long _channel;

}

@property (nonatomic,copy) NSArray * cellNetworkInfo;                  //@synthesize cellNetworkInfo=_cellNetworkInfo - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortium;              //@synthesize roamingConsortium=_roamingConsortium - In the implementation block
@property (nonatomic,retain) NSArray * domains;                        //@synthesize domains=_domains - In the implementation block
@property (nonatomic,copy) WFNetworkProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * ssid;                            //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * bssid;                           //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSString * operatorName;                    //@synthesize operatorName=_operatorName - In the implementation block
@property (assign) long long channel;                                  //@synthesize channel=_channel - In the implementation block
-(NSString *)operatorName;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)bssid;
-(long long)channel;
-(unsigned long long)hash;
-(void)setChannel:(long long)arg1 ;
-(NSString *)ssid;
-(void)setDomains:(NSArray *)arg1 ;
-(WFNetworkProfile *)profile;
-(id)description;
-(NSArray *)domains;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(id)initWithProfile:(id)arg1 ANQPResponse:(id)arg2 ;
-(BOOL)isEqualToWFANQPResponse:(id)arg1 ;
-(NSArray *)cellNetworkInfo;
-(void)setCellNetworkInfo:(NSArray *)arg1 ;
-(NSArray *)roamingConsortium;
-(void)setRoamingConsortium:(NSArray *)arg1 ;
@end
