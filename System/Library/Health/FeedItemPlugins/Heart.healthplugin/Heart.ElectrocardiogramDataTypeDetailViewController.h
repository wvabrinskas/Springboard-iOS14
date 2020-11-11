/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDElectrocardiogramOverviewViewController.h>

@interface Heart.ElectrocardiogramDataTypeDetailViewController : WDElectrocardiogramOverviewViewController {

	 consumedHealthExperienceStore;
	 displayType;
	 favoritesController;
	 viewControllerFactory;
	 profileView;
	 profileInformationDataSource;
	 profileInformationSink;

}
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithUsingInsetStyling:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(double)adjustedSafeAreaInsetTop;
-(void)isFavorited:(BOOL)arg1 ;
-(void)showAddDataVC;
@end
