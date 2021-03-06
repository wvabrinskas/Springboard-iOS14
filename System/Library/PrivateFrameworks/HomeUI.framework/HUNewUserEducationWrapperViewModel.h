/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUNewUserEducationBaseViewModel.h>

@class HUNewUserEducationStackViewModel, HUNewUserEducationToolbarViewModel;

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel {

	BOOL _masksToBounds;
	HUNewUserEducationStackViewModel* _stackViewModel;
	HUNewUserEducationToolbarViewModel* _toolbarModel;

}

@property (nonatomic,readonly) BOOL masksToBounds;                                             //@synthesize masksToBounds=_masksToBounds - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationStackViewModel * stackViewModel;              //@synthesize stackViewModel=_stackViewModel - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationToolbarViewModel * toolbarModel;              //@synthesize toolbarModel=_toolbarModel - In the implementation block
+(double)cornerRadius;
-(id)init;
-(BOOL)masksToBounds;
-(HUNewUserEducationToolbarViewModel *)toolbarModel;
-(HUNewUserEducationStackViewModel *)stackViewModel;
@end

