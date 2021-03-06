/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCBackgroundTaskable;
@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject {

	id<FCBackgroundTaskable> _backgroundTaskable;
	FCThreadSafeMutableDictionary* _remoteDefaults;

}

@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;              //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * remoteDefaults;                  //@synthesize remoteDefaults=_remoteDefaults - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(BOOL)isAvailable;
-(id)URLForKey:(id)arg1 ;
-(id)init;
-(id)dictionaryForKey:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)remoteDefaults;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)updateRemoteDefaults;
-(id)URLRequest;
-(void)checkForUpdate;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)initWithBackgroundTaskable:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

