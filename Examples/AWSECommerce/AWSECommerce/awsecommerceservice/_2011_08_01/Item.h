// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class ImageSets;
@class Subjects;
@class RelatedItems;
@class OfferSummary;
@class BrowseNodes;
@class SimilarProducts;
@class Collections;
@class ItemAttributes;
@class Variations;
@class EditorialReviews;
@class Errors;
@class VariationAttributes;
@class Offers;
@class Tracks;
@class ItemLinks;
@class AlternateVersions;
@class CustomerReviews;
@class Accessories;
@class Image;
@class VariationSummary;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface Item : NSObject <PicoBindable> {

@private
    NSString *_asin;
    NSString *_parentASIN;
    Errors *_errors;
    NSString *_detailPageURL;
    ItemLinks *_itemLinks;
    NSString *_salesRank;
    Image *_smallImage;
    Image *_mediumImage;
    Image *_largeImage;
    NSMutableArray *_imageSets;
    ItemAttributes *_itemAttributes;
    VariationAttributes *_variationAttributes;
    NSMutableArray *_relatedItems;
    Collections *_collections;
    Subjects *_subjects;
    OfferSummary *_offerSummary;
    Offers *_offers;
    VariationSummary *_variationSummary;
    Variations *_variations;
    CustomerReviews *_customerReviews;
    EditorialReviews *_editorialReviews;
    SimilarProducts *_similarProducts;
    Accessories *_accessories;
    Tracks *_tracks;
    BrowseNodes *_browseNodes;
    AlternateVersions *_alternateVersions;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *asin;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *parentASIN;

/**
 (public property)
 
 type : class Errors
*/
@property (nonatomic, retain) Errors *errors;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailPageURL;

/**
 (public property)
 
 type : class ItemLinks
*/
@property (nonatomic, retain) ItemLinks *itemLinks;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *salesRank;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, retain) Image *smallImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, retain) Image *mediumImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, retain) Image *largeImage;

/**
 (public property)
 
 entry type : class ImageSets
*/

@property (nonatomic, retain) NSMutableArray *imageSets;

/**
 (public property)
 
 type : class ItemAttributes
*/
@property (nonatomic, retain) ItemAttributes *itemAttributes;

/**
 (public property)
 
 type : class VariationAttributes
*/
@property (nonatomic, retain) VariationAttributes *variationAttributes;

/**
 (public property)
 
 entry type : class RelatedItems
*/

@property (nonatomic, retain) NSMutableArray *relatedItems;

/**
 (public property)
 
 type : class Collections
*/
@property (nonatomic, retain) Collections *collections;

/**
 (public property)
 
 type : class Subjects
*/
@property (nonatomic, retain) Subjects *subjects;

/**
 (public property)
 
 type : class OfferSummary
*/
@property (nonatomic, retain) OfferSummary *offerSummary;

/**
 (public property)
 
 type : class Offers
*/
@property (nonatomic, retain) Offers *offers;

/**
 (public property)
 
 type : class VariationSummary
*/
@property (nonatomic, retain) VariationSummary *variationSummary;

/**
 (public property)
 
 type : class Variations
*/
@property (nonatomic, retain) Variations *variations;

/**
 (public property)
 
 type : class CustomerReviews
*/
@property (nonatomic, retain) CustomerReviews *customerReviews;

/**
 (public property)
 
 type : class EditorialReviews
*/
@property (nonatomic, retain) EditorialReviews *editorialReviews;

/**
 (public property)
 
 type : class SimilarProducts
*/
@property (nonatomic, retain) SimilarProducts *similarProducts;

/**
 (public property)
 
 type : class Accessories
*/
@property (nonatomic, retain) Accessories *accessories;

/**
 (public property)
 
 type : class Tracks
*/
@property (nonatomic, retain) Tracks *tracks;

/**
 (public property)
 
 type : class BrowseNodes
*/
@property (nonatomic, retain) BrowseNodes *browseNodes;

/**
 (public property)
 
 type : class AlternateVersions
*/
@property (nonatomic, retain) AlternateVersions *alternateVersions;


@end