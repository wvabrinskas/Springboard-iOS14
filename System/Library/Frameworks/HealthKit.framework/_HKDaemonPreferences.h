/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HKDaemonPreferences : NSObject
+(BOOL)_setPreferenceValue:(void*)arg1 forKey:(id)arg2 ;
+(BOOL)isStoreDemoModeSet;
+(void)synchronizePreferencesWithWatch:(id)arg1 ;
+(id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 ;
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 ;
+(BOOL)isGenerateDemoDataSet;
+(id)valueForKey:(id)arg1 ;
+(BOOL)usingDemoDataDatabase;
+(BOOL)shouldGenerateDemoData;
+(BOOL)_boolValueForKey:(id)arg1 ;
@end
