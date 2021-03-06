/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {

	NSString* _identifier;

}
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)pedigree;
-(id)referenceURL;
-(id)_delegatePath;
-(id)declaration;
-(BOOL)isWildcard;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)isDeclared;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(BOOL)isChildOfTypeIdentifier:(id)arg1 ;
-(id)_declaringBundleBookmark;
-(id)_initWithContext:(LSContext*)arg1 dynamicUTI:(id)arg2 ;
-(void)_LSRecord_resolve_pedigree;
-(id)tagSpecification;
-(BOOL)isInPublicDomain;
-(id)preferredTagOfClass:(id)arg1 ;
-(id)parentTypeIdentifiers;
-(id)childTypeIdentifiers;
-(id)_localizedDescription;
-(id)declaringBundleRecord;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(BOOL)isDynamic;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)version;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(BOOL)isActive;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

