/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface MessageCriterion : NSObject
{
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    int _qualifier;
    NSArray *_criteria;
    int _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _dateIsRelative:1;
    int _type;
    NSArray *_requiredHeaders;
}

+ (void)_updateAddressComments:(id)fp8;	// IMP=0x30bb9615
+ (id)criteriaFromDefaultsArray:(id)fp8;	// IMP=0x30bb85ad
+ (id)criteriaFromDefaultsArray:(id)fp8 removingRecognizedKeys:(BOOL)fp12;	// IMP=0x30bb85c5
+ (id)criterionForMailboxURL:(id)fp8;	// IMP=0x30bbaa63
+ (int)criterionTypeForString:(id)fp8;	// IMP=0x30bba465
+ (id)defaultsArrayFromCriteria:(id)fp8;	// IMP=0x30bb868d
+ (void)initialize;	// IMP=0x30bb855d
+ (id)messageIsDeletedCriterion:(BOOL)fp8;	// IMP=0x30bbaaa9
+ (id)stringForCriterionType:(int)fp8;	// IMP=0x30bba7d5
- (BOOL)_evaluateAccountCriterion:(id)fp8;	// IMP=0x30bba0a5
- (BOOL)_evaluateAddressBookCriterion:(id)fp8;	// IMP=0x30bb9b41
- (BOOL)_evaluateAddressHistoryCriterion:(id)fp8;	// IMP=0x30bba0f1
- (BOOL)_evaluateAttachmentCriterion:(id)fp8;	// IMP=0x30bb9ec1
- (BOOL)_evaluateDateCriterion:(id)fp8;	// IMP=0x30bba10d
- (BOOL)_evaluateFullNameCriterion:(id)fp8;	// IMP=0x30bb9b5d
- (BOOL)_evaluateHeaderCriterion:(id)fp8;	// IMP=0x30bb9715
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)fp8;	// IMP=0x30bb9dd9
- (BOOL)_evaluateIsEncryptedCriterion:(id)fp8;	// IMP=0x30bb9e1d
- (BOOL)_evaluatePriorityIsHighCriterion:(id)fp8;	// IMP=0x30bb9e81
- (BOOL)_evaluatePriorityIsLowCriterion:(id)fp8;	// IMP=0x30bb9ea1
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)fp8;	// IMP=0x30bb9e61
- (id)_headersRequiredForEvaluation;	// IMP=0x30bb9449
- (id)_qualifierString;	// IMP=0x30bb93c9
- (BOOL)allCriteriaMustBeSatisfied;	// IMP=0x30bbaa19
- (id)criteria;	// IMP=0x30bba9b1
- (id)criterionIdentifier;	// IMP=0x30bb9361
- (int)criterionType;	// IMP=0x30bb92f1
- (BOOL)dateIsRelative;	// IMP=0x30bbaa41
- (int)dateUnits;	// IMP=0x30bbaa39
- (void)dealloc;	// IMP=0x30bb8be1
- (id)description;	// IMP=0x30bb8f91
- (id)descriptionWithDepth:(unsigned int)fp8;	// IMP=0x30bb8ce1
- (id)dictionaryRepresentation;	// IMP=0x30bb8fa9
- (BOOL)doesMessageSatisfyCriterion:(id)fp8;	// IMP=0x30bba215
- (id)emailAddressesForGroupCriterion;	// IMP=0x30bbaa5f
- (id)expression;	// IMP=0x30bb93e9
- (id)init;	// IMP=0x30bb872d
- (id)initWithCriterion:(id)fp8 expression:(id)fp12;	// IMP=0x30bb8791
- (id)initWithDictionary:(id)fp8;	// IMP=0x30bb8829
- (id)initWithDictionary:(id)fp8 andRemoveRecognizedKeysIfMutable:(BOOL)fp12;	// IMP=0x30bb8841
- (id)initWithType:(int)fp8 qualifier:(int)fp12 expression:(id)fp16;	// IMP=0x30bb87d5
- (BOOL)isEqual:(id)fp8;	// IMP=0x30bb8c3d
- (int)messageRuleQualifierForString:(id)fp8;	// IMP=0x30bba31d
- (id)name;	// IMP=0x30bb9419
- (int)qualifier;	// IMP=0x30bb93e1
- (void)setAllCriteriaMustBeSatisfied:(BOOL)fp8;	// IMP=0x30bbaa25
- (void)setCriteria:(id)fp8;	// IMP=0x30bba9d5
- (void)setCriterionIdentifier:(id)fp8;	// IMP=0x30bb9371
- (void)setCriterionType:(int)fp8;	// IMP=0x30bb9321
- (void)setDateIsRelative:(BOOL)fp8;	// IMP=0x30bbaa4b
- (void)setDateUnits:(int)fp8;	// IMP=0x30bbaa3d
- (void)setExpression:(id)fp8;	// IMP=0x30bb93ed
- (void)setName:(id)fp8;	// IMP=0x30bb941d
- (void)setQualifier:(int)fp8;	// IMP=0x30bb93e5
- (id)stringForMessageRuleQualifier:(int)fp8;	// IMP=0x30bba3e5

@end

