/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIBending : NSObject {

	float mSpaceWidth;
	float mSpaceHeight;
	BOOL mWithArrows;
	float mRectHeight;
	unsigned mMaxNodeCount;
	unsigned mMaxColumnCount;

}
+(unsigned)mapLogicalBoundsWithShapeSize:(CGSize)arg1 spaceSize:(CGSize)arg2 maxNodeCount:(unsigned)arg3 maxColumnCount:(unsigned)arg4 state:(id)arg5 ;
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)setRectHeight:(float)arg1 ;
-(void)mapWithState:(id)arg1 ;
-(id)initWithArrows:(BOOL)arg1 ;
-(void)setMaxNodeCount:(unsigned)arg1 ;
-(void)setMaxColumnCount:(unsigned)arg1 ;
@end

