/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface IMGroupBlacklistManager : NSObject {

	NSDate* _lastModifiedDate;

}

@property (retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)sharedInstance;
+(id)groupsBlacklistFilename;
-(id)init;
-(void)loadData;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)reloadIfNeeded;
-(void)save;
-(id)initFromFile:(id)arg1 ;
-(void)loadFromFile:(id)arg1 ;
-(BOOL)hasFileChanged;
-(BOOL)isFeatureDisabled;
-(void)_updateLastModifiedDate:(id)arg1 ;
-(void)blacklistGroupId:(id)arg1 ;
-(BOOL)isGroupInBlacklist:(id)arg1 ;
-(NSDate *)lastModifiedDate;
@end

