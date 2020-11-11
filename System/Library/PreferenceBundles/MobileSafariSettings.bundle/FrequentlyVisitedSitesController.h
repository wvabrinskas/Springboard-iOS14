/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSFrequentlyVisitedSitesController.h>

@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	BOOL _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(id)_existingIconsDataFromBookmarksDB;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)clearFrequentlyVisitedSites;
-(id)frequentlyVisitedSites;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)arg1 ;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2 ;
-(void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(BOOL)arg2 ;
-(void)dealloc;
@end
