/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (getter=isTruncated,readonly) BOOL truncated; 
@property (copy) id string; 
@property (assign) const void* font; 
@property (assign) double fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) BOOL wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
@property (assign) BOOL allowsFontSubpixelQuantization; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)mt_applyVisualStying:(id)arg1 ;
-(void)setFont:(const void*)arg1 ;
-(id)init;
-(void)setTruncationMode:(NSString *)arg1 ;
-(void)setWrapped:(BOOL)arg1 ;
-(id)_createStringDict;
-(CTTypesetterRef)_retainTypesetter;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 truncated:(BOOL*)arg3 ;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(NSString *)alignmentMode;
-(BOOL)allowsFontSubpixelQuantization;
-(id)truncationString;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(void)setTruncationString:(id)arg1 ;
-(CGSize)_preferredSize;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(BOOL)wrapped;
-(NSString *)truncationMode;
-(void)didChangeValueForKey:(id)arg1 ;
-(const void*)font;
-(double)fontSize;
-(CGColorRef)foregroundColor;
-(BOOL)isWrapped;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setString:(id)arg1 ;
-(BOOL)isTruncated;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)string;
-(void)dealloc;
@end
