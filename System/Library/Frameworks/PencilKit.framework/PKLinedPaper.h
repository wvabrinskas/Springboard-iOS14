/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKLinedPaper : NSObject <NSCopying> {

	double _horizontalInset;
	CGPoint _lineSpacing;

}

@property (nonatomic,readonly) CGPoint lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) double horizontalInset;              //@synthesize horizontalInset=_horizontalInset - In the implementation block
-(unsigned long long)hash;
-(CGPoint)lineSpacing;
-(BOOL)isEqual:(id)arg1 ;
-(double)horizontalInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2 ;
@end
