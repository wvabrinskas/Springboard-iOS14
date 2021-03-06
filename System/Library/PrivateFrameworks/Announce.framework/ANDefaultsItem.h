/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject, NSString;

@interface ANDefaultsItem : NSObject {

	NSObject* _defaultValue;
	NSString* _userInfo;

}

@property (nonatomic,retain) NSObject * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSString * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(id)itemWithValue:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)userInfo;
-(void)setDefaultValue:(NSObject *)arg1 ;
-(void)setUserInfo:(NSString *)arg1 ;
-(NSObject *)defaultValue;
@end

