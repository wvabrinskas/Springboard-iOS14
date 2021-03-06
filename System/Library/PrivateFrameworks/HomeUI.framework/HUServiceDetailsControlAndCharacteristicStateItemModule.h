/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUServiceDetailsItemModule.h>

@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate;
@class HFCharacteristicStateItemProvider, HFControlPanelItemProvider, NSSet;

@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule {

	HFCharacteristicStateItemProvider* _characteristicStateItemProvider;
	HFControlPanelItemProvider* _controlPanelItemProvider;
	NSSet* _itemProviders;
	id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HFCharacteristicStateItemProvider * characteristicStateItemProvider;                            //@synthesize characteristicStateItemProvider=_characteristicStateItemProvider - In the implementation block
@property (nonatomic,readonly) HFControlPanelItemProvider * controlPanelItemProvider;                                          //@synthesize controlPanelItemProvider=_controlPanelItemProvider - In the implementation block
-(id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate>)delegate;
-(void)setDelegate:(id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate>)arg1 ;
-(BOOL)isServiceGroup;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)sourceServiceItem;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
-(HFControlPanelItemProvider *)controlPanelItemProvider;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 delegate:(id)arg4 ;
-(HFCharacteristicStateItemProvider *)characteristicStateItemProvider;
-(id)_createGroupCharacteristicSectionsForItems:(id)arg1 ;
-(id)_createStandaloneCharacteristicSectionsForItems:(id)arg1 ;
-(id)_allCharacteristicTypesForItem:(id)arg1 ;
-(/*^block*/id)_characteristicStateItemComparator;
@end

