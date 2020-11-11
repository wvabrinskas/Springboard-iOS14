/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface HDSQLiteEntityIndex : NSObject {

	BOOL _unique;
	Class _entityClass;
	NSString* _name;
	NSArray* _columns;
	NSString* _predicateString;

}

@property (nonatomic,readonly) Class entityClass;                              //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * disambiguatedName; 
@property (nonatomic,readonly) NSArray * columns;                              //@synthesize columns=_columns - In the implementation block
@property (getter=isUnique,nonatomic,readonly) BOOL unique;                    //@synthesize unique=_unique - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateString;                //@synthesize predicateString=_predicateString - In the implementation block
-(NSArray *)columns;
-(NSString *)name;
-(NSString *)disambiguatedName;
-(NSString *)predicateString;
-(Class)entityClass;
-(BOOL)isUnique;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 ;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(BOOL)arg4 predicateString:(id)arg5 ;
-(id)creationSQL;
@end
