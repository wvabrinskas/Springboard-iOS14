/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGQuestionFactory.h>

@class PGManager, PHFetchResult, NSString;

@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory> {

	PGManager* _manager;
	PHFetchResult* _persons;

}

@property (nonatomic,retain) PHFetchResult * persons;                    //@synthesize persons=_persons - In the implementation block
@property (nonatomic,retain) PGManager * manager;                        //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) long long questionOptions; 
@property (nonatomic,readonly) unsigned short questionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setManager:(PGManager *)arg1 ;
-(PHFetchResult *)persons;
-(id)initWithManager:(id)arg1 ;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(PGManager *)manager;
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
@end
