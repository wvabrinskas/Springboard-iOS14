/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSMutableDictionary;

@interface PXAssetMetadataDonator : NSObject {

	NSCountedSet* _locationDescriptions;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSMutableDictionary* _locationDescriptionsByAssetLocalIdentifiers;

}

@property (nonatomic,retain) NSCountedSet * locationDescriptions;                                            //@synthesize locationDescriptions=_locationDescriptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueue;                                   //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationDescriptionsByAssetLocalIdentifiers;              //@synthesize locationDescriptionsByAssetLocalIdentifiers=_locationDescriptionsByAssetLocalIdentifiers - In the implementation block
+(id)sharedDonator;
+(id)new;
-(id)init;
-(NSMutableDictionary *)locationDescriptionsByAssetLocalIdentifiers;
-(void)donate:(id)arg1 ;
-(void)setLocationDescriptions:(NSCountedSet *)arg1 ;
-(void)donateMetadataForAsset:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(id)_init;
-(void)setBackgroundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSCountedSet *)locationDescriptions;
-(void)setLocationDescriptionsByAssetLocalIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)_notifyWhenDonationIsComplete:(/*^block*/id)arg1 ;
@end
