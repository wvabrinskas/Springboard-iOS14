/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>

@class PUSessionInfo, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager, PUAlbumsGadgetProvider, NSString;

@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver> {

	PUSessionInfo* _sessionInfo;
	unsigned long long _type;
	PXExtendedTraitCollection* _traitCollection;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUAlbumsGadgetProvider* _albumsGadgetProvider;
	NSString* _title;

}

@property (nonatomic,readonly) unsigned long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                           //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PUAlbumsGadgetProvider * albumsGadgetProvider;                           //@synthesize albumsGadgetProvider=_albumsGadgetProvider - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (readonly) PUSessionInfo * sessionInfo;                                                     //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(PXExtendedTraitCollection *)traitCollection;
-(void)loadDataForGadgets;
-(id)_seeAllViewController;
-(id)init;
-(void)setAlbumsGadgetProvider:(PUAlbumsGadgetProvider *)arg1 ;
-(void)startLoadingRemainingData;
-(void)_resetGadgets;
-(id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3 ;
-(BOOL)_canProvideGadgets;
-(void)_handleDataSourceChange;
-(void)generateGadgets;
-(id)_newConfiguration;
-(PUSessionInfo *)sessionInfo;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)type;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)pauseLoadingRemainingData;
-(PUAlbumsGadgetProvider *)albumsGadgetProvider;
-(unsigned long long)estimatedNumberOfGadgets;
-(id)_fromMyMacConfiguration;
-(id)_peoplePlacesAndMediaTypesConfiguration;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
@end
