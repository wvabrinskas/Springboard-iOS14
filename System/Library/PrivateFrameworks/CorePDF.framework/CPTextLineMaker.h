/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface CPTextLineMaker : NSObject {

	NSMutableArray* textLines;

}
-(id)textLines;
-(void)dealloc;
-(unsigned)makeTextLines:(id)arg1 ;
-(void)splitByGraphic:(id)arg1 with:(CPPDFContext*)arg2 ;
-(void)zOrderSplitLines:(id)arg1 ;
@end
