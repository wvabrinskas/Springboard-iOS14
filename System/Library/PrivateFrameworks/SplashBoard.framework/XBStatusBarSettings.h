/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSMutableSettings, NSString;

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSSecureCoding> {

	BSMutableSettings* _settings;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) long long style; 
@property (getter=isBackgroundActivityEnabled,nonatomic,readonly) BOOL backgroundActivityEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isHidden;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)_initWithBSSettings:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isBackgroundActivityEnabled;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
