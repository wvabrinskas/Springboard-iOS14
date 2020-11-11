/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMUserDefaultsObserveToken.h>

@class REMUserDefaults, NSString;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {

	BOOL _removed;
	REMUserDefaults* _userDefaults;
	NSString* _userDefaultsKey;
	/*^block*/id _block;

}

@property (nonatomic,retain) REMUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsKey;                    //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL removed;                                //@synthesize removed=_removed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObserving;
-(void)setRemoved:(BOOL)arg1 ;
-(NSString *)userDefaultsKey;
-(REMUserDefaults *)userDefaults;
-(void)setUserDefaults:(REMUserDefaults *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)removed;
@end
