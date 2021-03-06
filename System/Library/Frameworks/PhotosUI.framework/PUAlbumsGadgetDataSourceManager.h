/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class PXExtendedTraitCollection, PUSessionInfo, NSArray;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager {

	PXExtendedTraitCollection* _traitCollection;
	PUSessionInfo* _sessionInfo;
	NSArray* _providers;

}

@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,readonly) NSArray * providers;                                      //@synthesize providers=_providers - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(NSArray *)providers;
-(PXExtendedTraitCollection *)traitCollection;
-(id)gadgetProviders;
-(PUSessionInfo *)sessionInfo;
-(id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
@end

