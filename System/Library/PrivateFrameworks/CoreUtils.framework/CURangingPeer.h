/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface CURangingPeer : NSObject {

	NSData* _deviceAddress;
	NSData* _deviceIRK;
	NSString* _deviceModel;

}

@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSData * deviceIRK;                  //@synthesize deviceIRK=_deviceIRK - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)deviceIRK;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setDeviceIRK:(NSData *)arg1 ;
@end

