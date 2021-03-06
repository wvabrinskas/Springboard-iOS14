/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSOrderedSet;


@protocol PXPlacesMapRenderable <NSObject>
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
@required
-(void)setIndex:(long long)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id)arg1;
-(long long)index;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(void)setSelectionHandler:(id)arg1;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;

@end

