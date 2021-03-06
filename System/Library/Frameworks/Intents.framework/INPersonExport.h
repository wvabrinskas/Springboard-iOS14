/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(void)setDisplayName:(id)arg1;
-(void)setHandle:(id)arg1;
-(BOOL)isMe;
-(NSArray *)aliases;
-(NSString *)contactIdentifier;
-(void)setCustomIdentifier:(id)arg1;
-(NSString *)handle;
-(void)setPersonHandle:(id)arg1;
-(id)init;
-(NSString *)relationship;
-(void)setIsMe:(BOOL)arg1;
-(void)setSuggestionType:(long long)arg1;
-(void)setImage:(id)arg1;
-(INImage *)image;
-(NSString *)displayName;
-(void)setNameComponents:(id)arg1;
-(NSPersonNameComponents *)nameComponents;
-(INPersonHandle *)personHandle;
-(NSArray *)alternatives;
-(NSString *)customIdentifier;
-(void)setAlternatives:(id)arg1;
-(long long)suggestionType;
-(void)setRelationship:(id)arg1;
-(void)setContactIdentifier:(id)arg1;
-(void)setAliases:(id)arg1;

@end

