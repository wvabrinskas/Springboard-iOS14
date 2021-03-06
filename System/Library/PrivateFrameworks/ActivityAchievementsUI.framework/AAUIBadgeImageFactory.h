/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
@class NSMutableDictionary, AAUIAchievementResourceProvider, AAUIBadgeView, NSObject;

@interface AAUIBadgeImageFactory : NSObject {

	NSMutableDictionary* _cache;
	AAUIAchievementResourceProvider* _resourceProvider;
	AAUIBadgeView* _earnedBadgeView;
	AAUIBadgeView* _unearnedBadgeView;
	NSObject*<OS_dispatch_queue> _imageCreationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) AAUIAchievementResourceProvider * resourceProvider;              //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (nonatomic,retain) AAUIBadgeView * earnedBadgeView;                                 //@synthesize earnedBadgeView=_earnedBadgeView - In the implementation block
@property (nonatomic,retain) AAUIBadgeView * unearnedBadgeView;                               //@synthesize unearnedBadgeView=_unearnedBadgeView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageCreationQueue;                 //@synthesize imageCreationQueue=_imageCreationQueue - In the implementation block
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(AAUIAchievementResourceProvider *)resourceProvider;
-(void)clearAllCachedImages;
-(id)generateImageForConfiguration:(id)arg1 size:(CGSize)arg2 unearned:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)imageCreationQueue;
-(AAUIBadgeView *)unearnedBadgeView;
-(AAUIBadgeView *)earnedBadgeView;
-(id)thumbnailImageForAchievement:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)hasCachedThumbnailImageForAchievement:(id)arg1 size:(CGSize)arg2 ;
-(void)setResourceProvider:(AAUIAchievementResourceProvider *)arg1 ;
-(void)setEarnedBadgeView:(AAUIBadgeView *)arg1 ;
-(void)setUnearnedBadgeView:(AAUIBadgeView *)arg1 ;
-(void)setImageCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

