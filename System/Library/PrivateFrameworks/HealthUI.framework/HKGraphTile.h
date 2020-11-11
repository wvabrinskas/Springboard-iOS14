/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol HKGraphTileDrawingDelegate;
@class CALayer, NSString;

@interface HKGraphTile : NSObject <CALayerDelegate> {

	BOOL _tileDisplayedSinceSetNeedsDisplay;
	id<HKGraphTileDrawingDelegate> _drawingDelegate;
	CALayer* _caLayer;
	long long _column;

}

@property (nonatomic,retain) CALayer * caLayer;                                                  //@synthesize caLayer=_caLayer - In the implementation block
@property (assign,nonatomic) long long column;                                                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphTileDrawingDelegate> drawingDelegate;              //@synthesize drawingDelegate=_drawingDelegate - In the implementation block
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,readonly) BOOL tileDisplayedSinceSetNeedsDisplay;                           //@synthesize tileDisplayedSinceSetNeedsDisplay=_tileDisplayedSinceSetNeedsDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNeedsDisplay;
-(long long)column;
-(BOOL)hidden;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CALayer *)caLayer;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)dealloc;
-(void)setColumn:(long long)arg1 ;
-(id<HKGraphTileDrawingDelegate>)drawingDelegate;
-(void)configureTileWithScreenRect:(CGRect)arg1 column:(long long)arg2 ;
-(void)setDrawingDelegate:(id<HKGraphTileDrawingDelegate>)arg1 ;
-(BOOL)tileDisplayedSinceSetNeedsDisplay;
-(void)setCaLayer:(CALayer *)arg1 ;
@end
