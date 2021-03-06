/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WSBaseCoordinator.h>

@class UINavigationController;

@interface WallpaperSettings.WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator> {

	 childCoordinators;
	 navigationController;

}

@property (readonly,nonatomic) UINavigationController * navigationController; 
-(BOOL)runTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)start;
-(id)init;
-(id)initWithNavigationController:(id)arg1 ;
-(UINavigationController *)navigationController;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

