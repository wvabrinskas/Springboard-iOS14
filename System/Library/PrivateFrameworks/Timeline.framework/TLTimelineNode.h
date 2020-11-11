/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding> {

	TLTimelineNode* _leftNode;
	TLTimelineNode* _rightNode;

}

@property (nonatomic,retain) TLTimelineNode * rightNode;              //@synthesize rightNode=_rightNode - In the implementation block
@property (nonatomic,retain) TLTimelineNode * leftNode;               //@synthesize leftNode=_leftNode - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TLTimelineNode *)leftNode;
-(TLTimelineNode *)rightNode;
-(void)setLeftNode:(TLTimelineNode *)arg1 ;
-(void)setRightNode:(TLTimelineNode *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 copyLeftNodes:(BOOL)arg2 copyRightNodes:(BOOL)arg3 ;
-(unsigned long long)hashIncludingLeftNodes:(BOOL)arg1 includeRightNodes:(BOOL)arg2 ;
-(BOOL)isEqualToObject:(id)arg1 includingLeftNodes:(BOOL)arg2 includingRightNodes:(BOOL)arg3 ;
@end
