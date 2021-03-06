/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCSectionProviding;
@class NSArray;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
-(NSArray *)headlines;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(id<FCSectionProviding>)section;
-(id)init;
-(id)initWithSection:(id)arg1 headlines:(id)arg2 ;
-(id)description;
-(void)setHeadlines:(NSArray *)arg1 ;
@end

