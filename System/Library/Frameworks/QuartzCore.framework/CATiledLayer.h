/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) double maximumTileScale; 
@property (getter=isDrawingEnabled) BOOL drawingEnabled; 
@property (__weak) id<CATiledLayerDelegate><CALayerDelegate> delegate; 
@property (assign) unsigned long long levelsOfDetail; 
@property (assign) unsigned long long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(double)fadeDuration;
+(unsigned)prefetchedTiles;
+(BOOL)shouldDrawOnMainThread;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGSize)tileSize;
-(CGColorRef)fillColor;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_colorSpaceDidChange;
-(void)_display;
-(unsigned long long)levelsOfDetail;
-(BOOL)_canDisplayConcurrently;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfDetailBias;
-(double)maximumTileScale;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
-(BOOL)isDrawingEnabled;
-(BOOL)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)invalidateContents;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(void)_dealloc;
-(void)dealloc;
@end

