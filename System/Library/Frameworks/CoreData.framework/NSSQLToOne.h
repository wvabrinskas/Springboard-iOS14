/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	BOOL _isVirtual;

}
-(id)columnName;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(BOOL)isOptional;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(id)foreignEntityKey;
-(id)description;
-(id)foreignOrderKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
-(unsigned)slot;
-(BOOL)isVirtual;
-(void)dealloc;
@end

