/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {

	ODDNodePoint* mParent;
	NSMutableArray* mChildren;
	ODDTransitionPoint* mParentTransition;
	ODDTransitionPoint* mSiblingTransition;

}
-(id)children;
-(id)parent;
-(void)setType:(int)arg1 ;
-(id)siblingTransition;
-(id)parentTransition;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
-(void)setParentTransition:(id)arg1 ;
-(void)setSiblingTransition:(id)arg1 ;
@end

