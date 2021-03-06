/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI96 m_x;
	SCD_Struct_UI96 m_y;
	SCD_Struct_UI96 m_w;
	SCD_Struct_UI96 m_h;
	SCD_Struct_UI96 m_paddingTop;
	SCD_Struct_UI96 m_paddingLeft;
	SCD_Struct_UI96 m_paddingBottom;
	SCD_Struct_UI96 m_paddingRight;
	BOOL m_explicitlySpecified;
	BOOL m_isTemplate;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI96 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI96 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI96 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI96 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI96 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI96 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI96 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI96 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
@property (assign,nonatomic) BOOL isTemplate; 
+(id)geometryWithRect:(CGRect)arg1 ;
+(id)geometryWithOriginValue:(SCD_Struct_UI96)arg1 sizeValue:(SCD_Struct_UI96)arg2 ;
+(id)codeStringForValue:(SCD_Struct_UI96)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 withScale:(double)arg2 ;
+(id)geometry;
-(BOOL)isTemplate;
-(SCD_Struct_UI96)h;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setY:(SCD_Struct_UI96)arg1 ;
-(void)setW:(SCD_Struct_UI96)arg1 ;
-(void)setX:(SCD_Struct_UI96)arg1 ;
-(SCD_Struct_UI96)y;
-(id)initTemplateWithName:(id)arg1 rect:(SCD_Struct_UI97)arg2 padding:(SCD_Struct_UI97)arg3 ;
-(id)init;
-(void)setH:(SCD_Struct_UI96)arg1 ;
-(SCD_Struct_UI96)x;
-(void)setPaddingBottom:(SCD_Struct_UI96)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_UI96)paddingRight;
-(id)overrideGeometry:(id)arg1 ;
-(SCD_Struct_UI96)paddingLeft;
-(NSString *)name;
-(BOOL)usesPercentages;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_UI96)paddingBottom;
-(CGRect)frame;
-(void)setPaddingLeft:(SCD_Struct_UI96)arg1 ;
-(SCD_Struct_UI96)w;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI97)arg2 padding:(SCD_Struct_UI97)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(BOOL)usesAutomaticMetrics;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(BOOL)explicitlySpecified;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_UI96)paddingTop;
-(void)setPaddingTop:(SCD_Struct_UI96)arg1 ;
-(void)setPaddingRight:(SCD_Struct_UI96)arg1 ;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(id)shortDescription;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end

