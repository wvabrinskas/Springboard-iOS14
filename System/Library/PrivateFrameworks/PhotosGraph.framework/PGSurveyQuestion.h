/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary;

@interface PGSurveyQuestion : NSObject <PGQuestion> {

	unsigned short state;
	NSDictionary* additionalInfo;
	NSString* entityIdentifier;
	double localFactoryScore;
	double score;

}

@property (nonatomic,copy,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)entityType;
-(void)remove;
-(void)setScore:(double)arg1 ;
-(unsigned long long)hash;
-(double)score;
-(unsigned short)state;
-(NSDictionary *)additionalInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned short)type;
-(unsigned short)displayType;
-(NSString *)entityIdentifier;
-(BOOL)isEquivalentToQuestion:(id)arg1 ;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1 ;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
@end
