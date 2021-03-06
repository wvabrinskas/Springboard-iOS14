/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIUserModel.h>
#import <libobjc.A.dylib/TIKBUserModeling.h>
#import <libobjc.A.dylib/TIKBMetricProviding.h>
#import <libobjc.A.dylib/TIUserModelConfigurationDelegate.h>

@class NSArray, NSString;

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>

@property (nonatomic,readonly) NSArray * kbContexts; 
@property (nonatomic,readonly) NSArray * contexts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userModelWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(void)trackPowerLogIfNecessary;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(id)settingsDictionary;
-(Class)userModelValuesClass;
-(id)durableCounterKeys;
-(id)valueForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3 ;
-(id)valuesByBucketedWordLengthForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3 ;
-(NSArray *)kbContexts;
-(id)dictForPowerLog;
@end

