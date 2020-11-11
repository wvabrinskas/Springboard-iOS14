/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>

@protocol _UIScrollViewScrollObserver_Internal;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal> {

	id<_UIScrollViewScrollObserver_Internal> _controller;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<_UIScrollViewScrollObserver_Internal> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didScroll;
-(id<_UIScrollViewScrollObserver_Internal>)controller;
-(UIScrollView *)scrollView;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setController:(id<_UIScrollViewScrollObserver_Internal>)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
@end
