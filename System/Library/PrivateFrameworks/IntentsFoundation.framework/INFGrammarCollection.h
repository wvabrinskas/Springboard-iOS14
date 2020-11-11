/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSArray;

@interface INFGrammarCollection : NSObject {

	NSMutableDictionary* _tokensDictionary;
	NSMutableDictionary* _sentencesDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * tokensDictionary;                 //@synthesize tokensDictionary=_tokensDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sentencesDictionary;              //@synthesize sentencesDictionary=_sentencesDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * sentences; 
@property (nonatomic,readonly) NSArray * tokens; 
+(id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3 ;
+(id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 ;
+(id)grammarCollection;
-(NSArray *)tokens;
-(id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2 ;
-(id)init;
-(id)tokenWithIdentifier:(id)arg1 ;
-(id)sentenceWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)tokensDictionary;
-(NSMutableDictionary *)sentencesDictionary;
-(void)setTokensDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3 ;
-(void)addSentence:(id)arg1 ;
-(void)writeToFileAtPath:(id)arg1 ;
-(id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3 ;
-(void)addToken:(id)arg1 ;
-(id)createNounWithIdentifier:(id)arg1 language:(id)arg2 ;
-(void)setSentencesDictionary:(NSMutableDictionary *)arg1 ;
-(NSArray *)sentences;
-(id)createSentenceWithIdentifier:(id)arg1 ;
@end
