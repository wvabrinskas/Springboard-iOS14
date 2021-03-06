/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateRotateBehavior : PDAnimateBehavior {

	double mTo;
	double mFrom;
	double mBy;
	BOOL mHasTo;
	BOOL mHasFrom;
	BOOL mHasBy;

}
-(double)to;
-(double)by;
-(double)from;
-(BOOL)hasTo;
-(id)init;
-(void)setTo:(double)arg1 ;
-(BOOL)hasFrom;
-(BOOL)hasBy;
-(void)setFrom:(double)arg1 ;
-(void)setBy:(double)arg1 ;
@end

