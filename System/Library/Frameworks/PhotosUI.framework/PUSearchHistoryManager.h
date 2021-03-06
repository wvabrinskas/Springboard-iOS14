/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOrderedSet;

@interface PUSearchHistoryManager : NSObject {

	NSOrderedSet* _recentSearches;

}

@property (nonatomic,retain) NSOrderedSet * recentSearches;              //@synthesize recentSearches=_recentSearches - In the implementation block
+(id)sharedManager;
-(void)clearRecentSearches;
-(void)saveRecentSearch:(id)arg1 ;
-(void)setRecentSearches:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)recentSearches;
-(id)_recentSearchesFileURL;
-(BOOL)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id*)arg3 ;
-(id)_readRecentSearchesFromURL:(id)arg1 ;
-(id)_readRecentSearchesFromUserDefaults;
@end

