/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying> {

	EKEvent* _originalEventToSliceOn;
	EKSeriesDetails* _originalMainSeriesDetails;

}

@property (retain) EKEvent * originalEventToSliceOn;                         //@synthesize originalEventToSliceOn=_originalEventToSliceOn - In the implementation block
@property (retain) EKSeriesDetails * originalMainSeriesDetails;              //@synthesize originalMainSeriesDetails=_originalMainSeriesDetails - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKEvent *)originalEventToSliceOn;
-(void)setOriginalEventToSliceOn:(EKEvent *)arg1 ;
-(EKSeriesDetails *)originalMainSeriesDetails;
-(void)setOriginalMainSeriesDetails:(EKSeriesDetails *)arg1 ;
@end
