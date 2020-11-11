/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKOverlayContainerViewDelegate;
@class NSMutableOrderedSet, NSMapTable, NSMutableArray, UIView, MKMapView, NSArray;

@interface MKOverlayContainerView : UIView {

	NSMutableOrderedSet* _overlays[2];
	NSMapTable* _overlayToDrawable[2];
	NSMutableArray* _drawables[2];
	NSMutableArray* _vkOverlays[2];
	UIView* _viewContainers[2];
	id<MKOverlayContainerViewDelegate> _delegate;
	double _mapZoomScale;
	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) id<MKOverlayContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                      //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) double mapZoomScale;                                             //@synthesize mapZoomScale=_mapZoomScale - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSArray * allDrawables; 
-(void)addOverlay:(id)arg1 ;
-(NSArray *)overlays;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKOverlayContainerViewDelegate>)delegate;
-(void)setMapView:(MKMapView *)arg1 ;
-(long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2 ;
-(void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4 ;
-(void)_updateShowsAppleLogoIfNeeded;
-(long long)_levelForOverlay:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(SCD_Struct_MK6)_mapRectWithFractionOfVisible:(double)arg1 ;
-(void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(id)_considerAddingDrawable:(id)arg1 inAddRect:(SCD_Struct_MK6)arg2 level:(long long)arg3 ;
-(void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)_updateContentScale:(id)arg1 ;
-(id)_viewContainerForLevel:(long long)arg1 ;
-(double)mapZoomScale;
-(BOOL)_overlaySpansGlobeAndReplacesMapContent;
-(NSArray *)allDrawables;
-(void)addOverlays:(id)arg1 ;
-(void)setDelegate:(id<MKOverlayContainerViewDelegate>)arg1 ;
-(void)addOverlay:(id)arg1 level:(long long)arg2 ;
-(void)addOverlays:(id)arg1 level:(long long)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)removeOverlays:(id)arg1 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(id)drawableForOverlay:(id)arg1 ;
-(id)overlaysInLevel:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)removeOverlay:(id)arg1 ;
-(void)addAndRemoveOverlayViews;
-(MKMapView *)mapView;
-(void)setMapZoomScale:(double)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
@end
