/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {

	FigCaptionLayerPrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSublayers;
-(void)setFontName:(const char*)arg1 ;
-(id)init;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)updateDisplay:(OpaqueFigCFCaptionRendererRef)arg1 ;
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(void)dealloc;
@end

