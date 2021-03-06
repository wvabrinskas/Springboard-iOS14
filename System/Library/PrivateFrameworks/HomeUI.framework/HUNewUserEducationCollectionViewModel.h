/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor, HUNewUserEducationFlowLayoutModel;

@interface HUNewUserEducationCollectionViewModel : NSObject {

	BOOL _showsVerticalScrollIndicator;
	BOOL _showsHorizontalScrollIndicator;
	UIColor* _backgroundColor;
	double _decelerationRate;
	HUNewUserEducationFlowLayoutModel* _layoutModel;
	long long _numberOfItemsInSection;
	long long _numberOfSections;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double decelerationRate;                                      //@synthesize decelerationRate=_decelerationRate - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationFlowLayoutModel * layoutModel;              //@synthesize layoutModel=_layoutModel - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsInSection;                             //@synthesize numberOfItemsInSection=_numberOfItemsInSection - In the implementation block
@property (nonatomic,readonly) long long numberOfSections;                                   //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) BOOL showsVerticalScrollIndicator;                            //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (nonatomic,readonly) BOOL showsHorizontalScrollIndicator;                          //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(long long)numberOfSections;
-(BOOL)showsVerticalScrollIndicator;
-(UIColor *)backgroundColor;
-(double)decelerationRate;
-(BOOL)showsHorizontalScrollIndicator;
-(HUNewUserEducationFlowLayoutModel *)layoutModel;
-(long long)numberOfItemsInSection;
@end

