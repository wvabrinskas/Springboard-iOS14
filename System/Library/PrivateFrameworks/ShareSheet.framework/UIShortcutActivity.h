/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSString, NSNumber, UIImage, NSArray;

@interface UIShortcutActivity : UIApplicationExtensionActivity {

	NSString* _identifier;
	NSNumber* _sortValue;
	UIImage* _iconImage;
	NSString* _singleUseToken;
	NSString* _name;
	NSArray* _photosAssetIdentifiers;

}

@property (nonatomic,retain) UIImage * iconImage;                           //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * singleUseToken;                     //@synthesize singleUseToken=_singleUseToken - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSNumber * sortValue;                          //@synthesize sortValue=_sortValue - In the implementation block
@property (nonatomic,retain) NSArray * photosAssetIdentifiers;              //@synthesize photosAssetIdentifiers=_photosAssetIdentifiers - In the implementation block
-(UIImage *)iconImage;
-(id)activityType;
-(id)activityTitle;
-(id)initWithPartial:(id)arg1 ;
-(NSString *)identifier;
-(void)setIconImage:(UIImage *)arg1 ;
-(NSString *)name;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(id)_actionImage;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSortValue:(NSNumber *)arg1 ;
-(void)setSingleUseToken:(NSString *)arg1 ;
-(void)setPhotosAssetIdentifiers:(NSArray *)arg1 ;
-(NSString *)singleUseToken;
-(NSArray *)photosAssetIdentifiers;
-(id)initPartialShortcutWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3 sortValue:(id)arg4 ;
-(id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3 ;
-(long long)_defaultSortGroup;
-(NSNumber *)sortValue;
-(void)setName:(NSString *)arg1 ;
@end
