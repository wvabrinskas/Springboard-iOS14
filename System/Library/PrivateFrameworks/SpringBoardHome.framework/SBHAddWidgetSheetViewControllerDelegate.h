/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBHAddWidgetSheetViewControllerDelegate <SBHWidgetDragHandlerPassing>
@optional
-(id)addWidgetSheetViewController:(id)arg1 widgetIconForDescriptor:(id)arg2 sizeClass:(long long)arg3;

@required
-(void)addWidgetSheetViewControllerWillAppear:(id)arg1;
-(void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg1;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg1;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg1;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg1;

@end
