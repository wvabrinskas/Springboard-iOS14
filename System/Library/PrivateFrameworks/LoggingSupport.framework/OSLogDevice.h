/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign,nonatomic) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign,nonatomic) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (nonatomic,retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(void)setUid:(NSString *)arg1 ;
-(id)init;
-(void*)mobDev;
-(SimDevice *)simDev;
-(NSString *)uid;
-(id)description;
-(long long)devType;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(void)setDevType:(long long)arg1 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(void)setMobDev:(void*)arg1 ;
-(void)setSimDev:(SimDevice *)arg1 ;
@end

