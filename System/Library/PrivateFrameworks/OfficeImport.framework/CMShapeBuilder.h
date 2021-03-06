/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class OADOrientedBounds, NSDictionary;

@interface CMShapeBuilder : NSObject {

	int _type;
	OADOrientedBounds* _orientedBounds;
	unsigned long long _format;
	NSDictionary* _adjustValues;

}
+(CGRect)canonicalBounds;
-(CGAffineTransform)affineTransform;
-(void)setFileFormat:(unsigned long long)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(BOOL)isOffice12;
-(void)setOrientedBounds:(id)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)setAdjustValues:(id)arg1 ;
-(float)maxAdjustedValue;
@end

