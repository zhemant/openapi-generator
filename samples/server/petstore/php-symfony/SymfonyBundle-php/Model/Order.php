<?php
/**
 * Order
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swagger Petstore
 *
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the Order model.
 *
 * An order for a pets from the pet store
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class Order 
{
        /**
     * @var int|null
     * @SerializedName("id")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $id;

    /**
     * @var int|null
     * @SerializedName("petId")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $petId;

    /**
     * @var int|null
     * @SerializedName("quantity")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $quantity;

    /**
     * @var \DateTime|null
     * @SerializedName("shipDate")
     * @Assert\DateTime()
     * @Type("DateTime")
     */
    protected $shipDate;

    /**
     * Order Status
     *
     * @var string|null
     * @SerializedName("status")
     * @Assert\Choice({ "placed", "approved", "delivered" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $status;

    /**
     * @var bool|null
     * @SerializedName("complete")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected $complete;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->petId = isset($data['petId']) ? $data['petId'] : null;
        $this->quantity = isset($data['quantity']) ? $data['quantity'] : null;
        $this->shipDate = isset($data['shipDate']) ? $data['shipDate'] : null;
        $this->status = isset($data['status']) ? $data['status'] : null;
        $this->complete = isset($data['complete']) ? $data['complete'] : false;
    }

    /**
     * Gets id.
     *
     * @return int|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param int|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets petId.
     *
     * @return int|null
     */
    public function getPetId()
    {
        return $this->petId;
    }

    /**
     * Sets petId.
     *
     * @param int|null $petId
     *
     * @return $this
     */
    public function setPetId($petId = null)
    {
        $this->petId = $petId;

        return $this;
    }

    /**
     * Gets quantity.
     *
     * @return int|null
     */
    public function getQuantity()
    {
        return $this->quantity;
    }

    /**
     * Sets quantity.
     *
     * @param int|null $quantity
     *
     * @return $this
     */
    public function setQuantity($quantity = null)
    {
        $this->quantity = $quantity;

        return $this;
    }

    /**
     * Gets shipDate.
     *
     * @return \DateTime|null
     */
    public function getShipDate()
    {
        return $this->shipDate;
    }

    /**
     * Sets shipDate.
     *
     * @param \DateTime|null $shipDate
     *
     * @return $this
     */
    public function setShipDate(\DateTime $shipDate = null)
    {
        $this->shipDate = $shipDate;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return string|null
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Sets status.
     *
     * @param string|null $status  Order Status
     *
     * @return $this
     */
    public function setStatus($status = null)
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets complete.
     *
     * @return bool|null
     */
    public function isComplete()
    {
        return $this->complete;
    }

    /**
     * Sets complete.
     *
     * @param bool|null $complete
     *
     * @return $this
     */
    public function setComplete($complete = null)
    {
        $this->complete = $complete;

        return $this;
    }
}


