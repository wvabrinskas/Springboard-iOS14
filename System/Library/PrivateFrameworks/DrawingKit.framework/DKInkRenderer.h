/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIColor;


@protocol DKInkRenderer <NSObject>
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@required
-(void)clear;
-(void)flush;
-(id)snapshotImage;
-(id<DKInkRendererDelegate>)delegate;
-(UIColor *)inkColor;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1;
-(void)force;
-(BOOL)drawingEnabled;
-(void)display;
-(void)setDelegate:(id)arg1;
-(void)endStroke;
-(BOOL)initialized;
-(void)setDrawingEnabled:(BOOL)arg1;
-(void)addPoint:(SCD_Struct_DK0)arg1;
-(void)beginStroke;
-(void)setInkColor:(id)arg1;
-(void)teardown;
-(double)drawingScale;
-(void)setDrawingScale:(double)arg1;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;

@end

