/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {

	ISSoftwareApplication* _application;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * bundleID; 
@property (readonly) NSString * bundleShortVersionString; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSNumber * dsID; 
@property (readonly) NSNumber * ratingRank; 
@property (readonly) NSString * ratingSystem; 
@property (readonly) NSString * softwareType; 
@property (readonly) NSString * storeFrontID; 
@property (readonly) NSNumber * versionID; 
@property (readonly) NSString * environmentProduction; 
@property (readonly) NSString * environmentSandbox; 
@property (readonly) long long launchResultApplicationDisabled; 
@property (readonly) long long launchResultApplicationNotFound; 
@property (readonly) long long launchResultInvalidArgument; 
@property (readonly) long long launchResultLaunchOrSuspendInProgress; 
@property (readonly) long long launchResultLocked; 
@property (readonly) long long launchResultLockedOut; 
@property (readonly) long long launchResultSecurityPolicy; 
@property (readonly) long long launchResultSpringBoardUnavailable; 
@property (readonly) long long launchResultSuccess; 
@property (readonly) long long launchResultSyncing; 
@property (readonly) NSString * softwareTypeNewsstand; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSNumber *)versionID;
-(NSNumber *)adamID;
-(NSNumber *)ratingRank;
-(id)initWithApplication:(id)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)dsID;
-(NSString *)bundleVersion;
-(NSString *)bundleShortVersionString;
-(NSString *)storeFrontID;
-(id)_className;
-(id)attributeKeys;
-(NSString *)ratingSystem;
-(NSString *)softwareType;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(NSString *)environmentSandbox;
-(void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2 ;
-(long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3 ;
-(NSString *)environmentProduction;
-(long long)launchResultApplicationDisabled;
-(long long)launchResultApplicationNotFound;
-(long long)launchResultInvalidArgument;
-(long long)launchResultLaunchOrSuspendInProgress;
-(long long)launchResultLocked;
-(long long)launchResultLockedOut;
-(long long)launchResultSecurityPolicy;
-(long long)launchResultSpringBoardUnavailable;
-(long long)launchResultSuccess;
-(long long)launchResultSyncing;
-(NSString *)softwareTypeNewsstand;
@end

