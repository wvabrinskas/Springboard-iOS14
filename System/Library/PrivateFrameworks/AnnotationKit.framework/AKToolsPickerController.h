/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AKController, UINavigationController, UIViewController;

@interface AKToolsPickerController : NSObject {

	AKController* _controller;
	UINavigationController* _navController;
	UIViewController* _toolsListController;

}

@property (nonatomic,retain) UINavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) UIViewController * toolsListController;              //@synthesize toolsListController=_toolsListController - In the implementation block
@property (__weak) AKController * controller;                                     //@synthesize controller=_controller - In the implementation block
-(AKController *)controller;
-(UINavigationController *)navController;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setToolsListController:(UIViewController *)arg1 ;
-(UIViewController *)toolsListController;
@end
