/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMFLogging, NSSecureCoding> {

	HMIVideoFrame* _frame;
	NSSet* _events;

}

@property (readonly) HMIVideoFrame * frame;                         //@synthesize frame=_frame - In the implementation block
@property (readonly) NSSet * events;                                //@synthesize events=_events - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSSet *)events;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(HMIVideoFrame *)frame;
-(id)initWithCoder:(id)arg1 ;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(id)initWithFrame:(id)arg1 events:(id)arg2 ;
-(id)maxConfidenceEvents;
@end

